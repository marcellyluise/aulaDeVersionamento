//
//  MLSGMasterViewController.h
//  ControllingSource
//
//  Created by Marcelly Luise Souza Godinho on 7/28/14.
//  Copyright (c) 2014 marcellyluise. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MLSGMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
