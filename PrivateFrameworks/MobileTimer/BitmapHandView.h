//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileTimer/HandView-Protocol.h>

@class NSArray, NSString;

@interface BitmapHandView : UIView <HandView>
{
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint)arg2 maintainsOrientation:(_Bool)arg3;
+ (id)partInfoWithName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint)arg2;
- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
