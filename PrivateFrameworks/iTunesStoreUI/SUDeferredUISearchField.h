//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchField.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView>
{
    long long _deferredClearButtonMode;
    id _deferredFont;
    struct CGRect _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    _Bool _isDeferringInterfaceUpdates;
}

- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (id)text;
- (void)setText:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (id)placeholder;
- (float)paddingTop;
- (float)paddingLeft;
- (struct CGRect)frame;
- (id)font;
- (long long)clearButtonMode;
@property(nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

