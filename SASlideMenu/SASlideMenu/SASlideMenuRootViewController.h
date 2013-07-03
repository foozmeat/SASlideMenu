//
//  SASlideMenuRootViewController.h
//  SASlideMenu
//
//  Created by Stefano Antonelli on 1/16/13.
//  Copyright (c) 2013 Stefano Antonelli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SASlideMenuViewController.h"

@class SASlideMenuNavigationController;
@class SASlideMenuViewController;
@interface SASlideMenuRootViewController : UIViewController


@property (nonatomic,strong) SASlideMenuViewController* leftMenu;
@property (nonatomic,strong) UIViewController* rightMenu;
@property (nonatomic,assign) Boolean isRightMenuEnabled;
@property (nonatomic,strong) SASlideMenuNavigationController* navigationController;
@property (nonatomic,strong) UINavigationController* selectedContent;

-(void) switchToContentViewController:(UINavigationController*) content;
-(void) addContentViewController:(UIViewController*) content withIndexPath:(NSIndexPath*)indexPath;

-(void) popRightNavigationController;
-(void) pushRightNavigationController:(SASlideMenuNavigationController*)navigationController;

-(UINavigationController*) controllerForIndexPath:(NSIndexPath*) indexPath;

-(void) panItem:(UIPanGestureRecognizer*)gesture;

-(void) doSlideToSide;
-(void) rightMenuAction;



@end
