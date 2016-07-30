//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplit : UIKBKeyView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_picker;
}

@property(readonly) UITableView *picker; // @synthesize picker=_picker;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)defaultIndexPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

