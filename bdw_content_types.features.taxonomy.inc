<?php
/**
 * @file
 * bdw_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bdw_content_types_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_1' => array(
      'name' => 'Newsletter',
      'machine_name' => 'vocabulary_1',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
    ),
  );
}
