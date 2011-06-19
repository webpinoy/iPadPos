//
//  mySecondIpadAppDelegate.h
//  mySecondIpad
//
//  Created by Mac Admin on 6/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class mySecondIpadViewController;

@interface mySecondIpadAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet mySecondIpadViewController *viewController;

@end
