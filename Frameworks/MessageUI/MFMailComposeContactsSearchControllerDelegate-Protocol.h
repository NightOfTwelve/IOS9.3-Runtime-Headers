//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFMailAccountProxy, MFMailComposeContactsSearchController, NSArray;

@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didFindCorecipients:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 finishedWithResults:(_Bool)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didSortResults:(NSArray *)arg2;
- (MFMailAccountProxy *)sendingAccountProxyForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;
@end

