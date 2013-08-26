//
//  MMPanAndPinchScrapGestureRecognizer.h
//  LooseLeaf
//
//  Created by Adam Wulf on 8/25/13.
//  Copyright (c) 2013 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>
#import "Constants.h"
#import "MMScrapView.h"

@interface MMPanAndPinchScrapGestureRecognizer : UIGestureRecognizer{
    // the initial distance between
    // the touches. to be used to calculate
    // scale
    CGFloat initialDistance;

    // the collection of valid touches for this gesture
    NSMutableSet* ignoredTouches;
    NSMutableOrderedSet* validTouches;

    // track which bezels our delegate cares about
    MMBezelDirection bezelDirectionMask;
    // the direction that the user actually did exit, if any
    MMBezelDirection didExitToBezel;
    // track the direction of the scale
    MMBezelScaleDirection scaleDirection;
    
    //
    // don't allow both the 2nd to last touch
    // and the last touch to trigger a repeat
    // of the bezel
    BOOL secondToLastTouchDidBezel;
}

@property (readonly) NSArray* touches;
@property (nonatomic, readonly) CGFloat scale;
@property (nonatomic, readonly) CGFloat rotation;
@property (nonatomic, weak) MMScrapView* scrap;

-(void)setAnchorPoint:(CGPoint)anchorPoint forView:(UIView *)view;

@end