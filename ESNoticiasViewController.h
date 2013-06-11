//
//  ESNoticiasViewController.h
//  ejercicio2
//
//  Created by Nacho on 11/06/13.
//  Copyright (c) 2013 Nacho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ESNoticiasViewController : UIViewController
@property (strong, nonatomic) IBOutlet UISegmentedControl *noticiasSegmentedControl;

@property (strong, nonatomic) IBOutlet UIWebView *noticiasWebView;

@end
