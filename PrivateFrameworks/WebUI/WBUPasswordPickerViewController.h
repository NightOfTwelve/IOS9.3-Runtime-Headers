//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSString;

@interface WBUPasswordPickerViewController : UINavigationController
{
    NSString *_prompt;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_pickSavedPassword:(id)arg1;
- (void)_cancel;
- (void)dealloc;
- (id)initWithPrompt:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

