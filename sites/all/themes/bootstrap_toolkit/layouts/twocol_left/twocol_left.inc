<?php
// Plugin definition
$plugin = array(
  'title' => t('Two Column - Sidebar Left'),
  'icon' => 'twocol_left.png',
  'category' => t('Toolkit'),
  'theme' => 'twocol_left',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
