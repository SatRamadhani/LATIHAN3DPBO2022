<?php
    class RAM
    {
        // RAM attributes.
        private $capacity;
        private $price;
        
        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as data constructor. */

        // Constructor with RAM's data.
        public function __construct($capacity, $price)
        {
            $this->capacity = $capacity;
            $this->price = $price;
        }

        /* Setter and Getter. */

        // Set capacity attribute.
        public function setCapacity($capacity)
        {
            $this->capacity = $capacity;
        }

        // Set price attribute.
        public function setPrice($price)
        {
            $this->price = $price;
        }

        // Get capacity attribute.
        public function getCapacity()
        {
            return $this->capacity;
        }

        // Get price attribute.
        public function getPrice()
        {
            return $this->price;
        }

        public function __destruct()
        {
            
        }
    }
?>