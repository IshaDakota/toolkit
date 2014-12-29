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

  //Make age range and program duration bootstrap buttons.
  if($variables['element']['#field_name'] == 'field_age_range'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#options']['attributes']['class'] = 'btn btn-primary'; 
      $variables['items'][ $key ]['#options']['attributes']['role'] = 'button';  
    }
  }

  if($variables['element']['#field_name'] == 'field_program_duration'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#options']['attributes']['class'] = 'btn btn-primary'; 
      $variables['items'][ $key ]['#options']['attributes']['role'] = 'button';  
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
