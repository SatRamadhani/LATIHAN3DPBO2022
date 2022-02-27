<?php
    class Disk
    {
        // Disk attributes.
        private $type;
        private $capacity;
        private $price;
        
        /* Constructor.
           Please take note that after a few try, PHP seems to not accept
           multiple constructor. So I decided to set it as data constructor. */
        
        // Constructor with disk's data.
        public function __construct($type, $capacity, $price)
        {
            $this->type = $type;
            $this->capacity = $capacity;
            $this->price = $price;            
        }

        /* Setter and Getter. */

        // Set type attribute.
        public function setType($type)
        {
            $this->type = $type;
        }

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

        // Get type attribute.
        public function getType()
        {
            return $this->type;
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

        /* Destructor. */

        public function __destruct()
        {
            
        }
    }
?>