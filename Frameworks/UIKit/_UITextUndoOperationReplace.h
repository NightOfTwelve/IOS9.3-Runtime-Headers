//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSUndoTextOperation.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace : NSUndoTextOperation
{
    struct _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;

@end

