//
//  DetailViewController.h
//  Santorini1
//
//  Created by Musicmaster on 5/29/13.
//  Copyright (c) 2013 Musicmaster. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
