//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RMHeading : NSObject
{
    struct CGPDFNode *_node;
    struct CGPDFPage *_page;
    CDStruct_627e0f85 _textRange;
}

@property CDStruct_627e0f85 textRange; // @synthesize textRange=_textRange;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (struct CGRect)bounds;
- (id)initWithNode:(struct CGPDFNode *)arg1 onPage:(struct CGPDFPage *)arg2;

@end
