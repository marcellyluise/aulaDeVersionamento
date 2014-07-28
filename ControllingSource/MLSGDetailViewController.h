//
//  MLSGDetailViewController.h
//  ControllingSource
//
//  Created by Marcelly Luise Souza Godinho on 7/28/14.
//  Copyright (c) 2014 marcellyluise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLSGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
