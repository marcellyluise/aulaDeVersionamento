//
//  MLSGAppDelegate.h
//  ControllingSource
//
//  Created by Marcelly Luise Souza Godinho on 7/28/14.
//  Copyright (c) 2014 marcellyluise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLSGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
