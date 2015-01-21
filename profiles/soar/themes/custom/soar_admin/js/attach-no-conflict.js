
// Transition

if(jqboot.fn.emulateTransitionEnd) {
  jQuery.fn.emulateTransitionEnd = jqboot.fn.emulateTransitionEnd;
}

if(jqboot.support.transition && jqboot.event.special && jqboot.event.special.bsTransitionEnd) {
  jQuery.support.transition = jqboot.support.transition;
  jQuery.event.special.bsTransitionEnd = jqboot.event.special.bsTransitionEnd;
}

// affix
if(jqboot.fn.affix) {
  jQuery.fn.affix = jqboot.fn.affix;
  jQuery.fn.affix.Constructor = jqboot.fn.affix.Constructor;
}

// alert
if(jqboot.fn.alert) {
  jQuery.fn.alert = jqboot.fn.alert;
  jQuery.fn.alert.Constructor = jqboot.fn.alert.Constructor;
}

// button
if(jqboot.fn.button) {
  jQuery.fn.button = jqboot.fn.button;
  jQuery.fn.button.Constructor = jqboot.fn.button.Constructor;
}

// carousel
if(jqboot.fn.carousel) {
  jQuery.fn.carousel = jqboot.fn.carousel;
  jQuery.fn.carousel.Constructor = jqboot.fn.carousel.Constructor;
}

// collapse
if(jqboot.fn.collapse) {
  jQuery.fn.collapse = jqboot.fn.collapse;
  jQuery.fn.collapse.Constructor = jqboot.fn.collapse.Constructor;
}

// dropdown
if(jqboot.fn.dropdown) {
  jQuery.fn.dropdown = jqboot.fn.dropdown;
  jQuery.fn.dropdown.Constructor = jqboot.fn.dropdown.Constructor;
}

// Modal
if(jqboot.fn.modal) {
  jQuery.fn.modal = jqboot.fn.modal;
  jQuery.fn.modal.Constructor = jqboot.fn.modal.Constructor;
}

// tooltip
if(jqboot.fn.tooltip) {
  jQuery.fn.tooltip = jqboot.fn.tooltip;
  jQuery.fn.tooltip.Constructor = jqboot.fn.tooltip.Constructor;
}

// popover
if(jqboot.fn.popover) {
  jQuery.fn.popover = jqboot.fn.popover;
  jQuery.fn.popover.Constructor = jqboot.fn.popover.Constructor;
}

// scrollspy 
if(jqboot.fn.scrollspy ) {
  jQuery.fn.scrollspy  = jqboot.fn.scrollspy ;
  jQuery.fn.scrollspy .Constructor = jqboot.fn.scrollspy .Constructor;
}

// tab
if(jqboot.fn.tab) {
  jQuery.fn.tab = jqboot.fn.tab;
  jQuery.fn.tab.Constructor = jqboot.fn.tab.Constructor;
}


