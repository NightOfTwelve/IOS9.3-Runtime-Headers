//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class UIViewController;
@protocol SearchUIResult;

@protocol SearchUIDelegate <NSObject>
- (UIViewController *)viewControllerForPresenting;
- (void)didSelectActionItemForResult:(id <SearchUIResult>)arg1;
- (void)resultSelected:(id <SearchUIResult>)arg1;
@end

