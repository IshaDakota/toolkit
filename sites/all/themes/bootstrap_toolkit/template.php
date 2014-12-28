<?php

/**
 * @file
 * template.php
 */

function bootstrap_toolkit_preprocess_field(&$variables) {

  // Add 'img-responsive' class to header images.
  if($variables['element']['#field_name'] == 'field_header_image'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive'; 
    }
  }
  
  //Add glyphicons as "bullets" to core learning and key question fileds.
  if($variables['element']['#field_name'] == 'field_core_learnings'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon glyphicon-ok-sign" aria-hidden="true"></span>';
    }
  }
  if($variables['element']['#field_name'] == 'field_key_questions'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon glyphicon-question-sign" aria-hidden="true"></span>';
    }
  }
}
