//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DDRemoteActionHostViewController : _UIRemoteViewController
{
    id <DDRemoteActionHostViewControllerDelegate> _delegate;
}

@property __weak id <DDRemoteActionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

