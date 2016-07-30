//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject
{
}

- (void)detach;
- (id)previousNode;
- (id)nextNode;
@property(readonly) _Bool pointerBeforeReferenceNode;
@property(readonly) DOMNode *referenceNode;
@property(readonly) _Bool expandEntityReferences;
@property(readonly) id <DOMNodeFilter> filter;
@property(readonly) unsigned int whatToShow;
@property(readonly) DOMNode *root;
- (void)finalize;
- (void)dealloc;

@end

