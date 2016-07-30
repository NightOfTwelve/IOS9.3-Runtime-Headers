//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString, UIColor, UIVisualEffect, _UITableViewCellActionButton;

@interface UITableViewRowAction : NSObject <NSCopying>
{
    long long _style;
    NSString *_title;
    UIColor *_backgroundColor;
    CDUnknownBlockType _handler;
    _UITableViewCellActionButton *_button;
    UIVisualEffect *_backgroundEffect;
}

+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=_handler) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setButton:(id)arg1;
- (id)_button;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

