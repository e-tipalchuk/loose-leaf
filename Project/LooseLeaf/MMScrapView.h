//
//  MMScrap.h
//  LooseLeaf
//
//  Created by Adam Wulf on 8/23/13.
//  Copyright (c) 2013 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMScrapView : UIView

@property (readonly) CGPoint unscaledOrigin;
@property (assign) CGFloat preGestureScale;
@property (assign) CGFloat preGestureRotation;
@property (nonatomic, assign) CGFloat scale;
@property (nonatomic, assign) CGFloat rotation;

- (id)initWithBezierPath:(UIBezierPath*)path;

-(void) didUpdateAccelerometerWithRawReading:(CGFloat)currentRawReading;

-(BOOL) containsTouch:(UITouch*)touch;

#pragma mark - debug
-(UIBezierPath*) intersect:(UIBezierPath*)newPath;

@end