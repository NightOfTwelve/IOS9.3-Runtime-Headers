//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSArray, NSSet, NSURL, SSDownloadManager, SSDownloadQueue, SUClient, UIViewController;

@protocol SUClientDelegate <NSObject>
- (_Bool)client:(SUClient *)arg1 presentModalViewController:(UIViewController *)arg2 animated:(_Bool)arg3;

@optional
- (UIViewController *)topViewControllerForClient:(SUClient *)arg1;
- (_Bool)client:(SUClient *)arg1 openInternalURL:(NSURL *)arg2;
- (SSDownloadQueue *)downloadQueueForClient:(SUClient *)arg1 downloadKinds:(NSSet *)arg2;
- (SSDownloadManager *)downloadManagerForClient:(SUClient *)arg1 downloadKinds:(NSArray *)arg2;
- (_Bool)client:(SUClient *)arg1 presentComposeReviewViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (_Bool)client:(SUClient *)arg1 presentAccountViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

