//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLElement : DOMElement
{
}

- (void)click;
- (void)insertAdjacentText:(id)arg1 text:(id)arg2;
- (void)insertAdjacentHTML:(id)arg1 html:(id)arg2;
- (id)insertAdjacentElement:(id)arg1 element:(id)arg2;
@property(readonly, copy) NSString *titleDisplayString;
- (void)setSpellcheck:(_Bool)arg1;
- (_Bool)spellcheck;
@property(readonly) _Bool isContentEditable;
@property(copy) NSString *contentEditable;
@property(readonly) DOMHTMLCollection *children;
@property(copy) NSString *outerText;
@property(copy) NSString *innerText;
@property(copy) NSString *accessKey;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (void)setWebkitdropzone:(id)arg1;
- (id)webkitdropzone;
- (void)setDraggable:(_Bool)arg1;
- (_Bool)draggable;
@property int tabIndex;
@property(copy) NSString *dir;
- (void)setTranslate:(_Bool)arg1;
- (_Bool)translate;
@property(copy) NSString *lang;
@property(copy) NSString *title;
@property(copy) NSString *idName;
- (void)absolutePosition:(int *)arg1:(int *)arg2:(int *)arg3:(int *)arg4;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(_Bool)arg3;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (int)scrollYOffset;
- (int)scrollXOffset;
- (int)structuralComplexityContribution;

@end

