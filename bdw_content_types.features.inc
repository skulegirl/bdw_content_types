<?php
/**
 * @file
 * bdw_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bdw_content_types_node_info() {
  $items = array(
    'free_file_download' => array(
      'name' => t('Free File Download'),
      'base' => 'node_content',
      'description' => t('A free file download'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Newsletter issue'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Please submit a testimonial telling us what you love about the "Boondockers Welcome" site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please submit a testimonial telling us what you love about the "Boondockers Welcome" site, and what great experiences you\'ve had when meeting other members.
'),
    ),
    'user_recommendation' => array(
      'name' => t('User Recommendation'),
      'base' => 'node_content',
      'description' => t('A recommendation of one user made by another.'),
      'has_title' => '1',
      'title_label' => t('Recommendation Headline'),
      'help' => t('Tell us how you met another member, how well you got along, and whether you would recommend him to others, as either a host or guest.'),
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_uc_product_default_classes().
 */
function bdw_content_types_uc_product_default_classes() {
  $items = array(
    'membership_level' => array(
      'name' => t('Membership Level'),
      'base' => 'uc_product',
      'description' => t('Different membership level depending on product purchased.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'uc_product',
      'description' => t('Use <em>products</em> to represent items for sale on the website, including all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
