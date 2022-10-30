var c = document.getElementById("myCanvas");
var ctx = c.getContext("2d");

let loadImage = (src, callback) => { 
   var img = document.createElement("img");
   img.onload = () => callback(img);
   img.src = src;
}

let setImagePath = (frameNumber, animation) => {
   return "./images/" + animation + "/" + frameNumber + ".png";
};

// Play Sounds

let playSounds = (path) => {
   let sound = "./sounds/" + path + ".mp3";
   var audio = new Audio(sound);
   audio.play();
}

let frame = {
   idle: [1, 2, 3, 4, 5, 6, 7, 8],
   kick: [1, 2, 3, 4, 5, 6, 7],
   punch: [1, 2, 3, 4, 5, 6, 7],
   block: [1, 2, 3, 4, 5, 6, 7, 8, 9],
   forward: [1, 2, 3, 4, 5, 6],
   backward: [1, 2, 3, 4, 5, 6]
}

let loadImages = (callback) => {

   let images = { idle: [], kick: [], punch: [], block: [], forward: [], backward: [] };
   let imagesToLoad = 0;
   ["idle", "kick", "punch", "block", "forward", "backward"].forEach( animation  => {
      let animationFrames = frame[animation];
      imagesToLoad = imagesToLoad + animationFrames.length;

      animationFrames.forEach( (frameNumber) => {
         let path = setImagePath(frameNumber, animation);
         loadImage(path, (image) => {
            images[animation][frameNumber - 1] = image;
            imagesToLoad = imagesToLoad - 1;
   
            if ( imagesToLoad === 0 )
               callback(images);
         });
      })
   })
};

var x = 0 ;

let animate = (ctx, images, animation, callback) =>{

   images[animation].forEach( (image, index) => {
      setTimeout( () => {

         // Move Forward
            if (image.src.includes("forward")) {
               if (x < 576)
                  x += 6;
               ctx.clearRect(x, 100, 350, 350);
               ctx.drawImage(image, x, 100, 350, 350);
            }
         // Move Backwards
            else if (image.src.includes("backward")) {
               if (x > 0)
                  x -= 6;
               ctx.clearRect(x, 100, 350, 350);
               ctx.drawImage(image, x, 100, 350, 350);
            }

            ctx.clearRect(x, 100, 350, 350);
            ctx.drawImage(image, x, 100, 350, 350);
         }, index * 90 );
         
   });
   setTimeout(callback, images[animation].length * 90);
}

loadImages( (images) => {

   let queuedAnimations = [];
   let aux = () => {
      let selectedAnimation ; 

      if( queuedAnimations.length === 0 ) 
         selectedAnimation = "idle";
      
      else 
         selectedAnimation = queuedAnimations.shift();
         
      animate(ctx, images, selectedAnimation, aux);
   }
      aux();

   document.getElementById('punch').onclick = () =>{
      queuedAnimations.push("punch");
      playSounds("punch");
   };
   document.getElementById("kick").onclick = () => {
      queuedAnimations.push("kick");
      playSounds("kick");
   };
   document.getElementById("block").onclick = () => {
      queuedAnimations.push("block");
      playSounds("block");
   };
   document.getElementById("forward").onclick = () => {
      queuedAnimations.push("forward");
      playSounds("move");
   };
   document.getElementById("backward").onclick = () => {
      queuedAnimations.push("backward");
      playSounds("move");
   };

   document.addEventListener('keydown', (event) => {
      const key = event.key; // "ArrowRight", "ArrowLeft", "ArrowUp", or "ArrowDown"

      if(key === "ArrowLeft") {
         queuedAnimations.push("kick");
         playSounds("kick");
      }
      else if (key ==="ArrowRight") {
         queuedAnimations.push("punch");
         playSounds("punch");
      }
      else if (key === "ArrowUp") {
         queuedAnimations.push("forward");
         playSounds("move");
      }
      else if (key === "ArrowDown") {
         queuedAnimations.push("backward");
         playSounds("move");
      }
      else if (key === " ") {
         queuedAnimations.push("block");
         playSounds("block");
      }
   });

});


// For Playing Background Music

var state = false;
document.getElementById("theme").addEventListener('click' , function () {

   state = !state;
  if (state) {
      document.getElementById('theme-audio').play();
      document.getElementById('theme').innerHTML = "<i class = 'fas fa-volume-up'></i> ";
  }
  else{
     document.getElementById('theme-audio').pause();
     document.getElementById('theme').innerHTML = "<i class = 'fas fa-volume-mute'></i> ";
  }
});
