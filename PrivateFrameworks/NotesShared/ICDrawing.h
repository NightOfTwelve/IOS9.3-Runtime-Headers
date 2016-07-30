//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingUndoStack, NSDate, NSMutableOrderedSet, NSOrderedSet, NSUUID, TTVectorMultiTimestamp;

@interface ICDrawing : NSObject
{
    NSMutableOrderedSet *_commands;
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect _unrotatedBoundsInCommandSpace;
    struct CGRect _commandBounds;
    ICDrawingUndoStack *_undoStack;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSDate *_orientationTimestamp;
}

+ (struct CGSize)platformFullSize;
+ (struct CGSize)platformFullPixelSize;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (struct CGAffineTransform)fullSizeOrientationTransform:(long long)arg1;
+ (struct CGSize)fullSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) ICDrawingUndoStack *undoStack; // @synthesize undoStack=_undoStack;
@property(nonatomic) struct CGRect unrotatedBoundsInCommandSpace; // @synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace;
@property(retain, nonatomic) NSDate *orientationTimestamp; // @synthesize orientationTimestamp=_orientationTimestamp;
@property(readonly, nonatomic) NSOrderedSet *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long imageOrientation;
- (struct CGAffineTransform)orientationTransform;
@property(readonly, nonatomic) struct CGRect fullBounds;
- (struct CGSize)unrotatedFullSize;
- (struct CGSize)fullSize;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (void)incrementTimestampOfCommand:(id)arg1;
- (void)addNewCommand:(id)arg1;
- (void)setCommandIDForInsertion:(id)arg1;
- (struct ICDrawingCommandID)commandIDForNewCommand;
- (void)addCommands:(id)arg1;
- (void)sortCommands;
- (void)setTransientOrientation:(long long)arg1;
@property(nonatomic) long long orientation;
- (void)invalidateBounds;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)commandBounds;
- (struct CGRect)calculateCommandBounds;
@property(readonly, nonatomic) NSOrderedSet *visibleCommands;
- (id)mutableCommands;
- (id)initWithCommands:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)init;
- (id)serializeWithPathData:(_Bool)arg1 toVersion:(unsigned int *)arg2;
- (id)serializeWithPathData:(_Bool)arg1;
- (unsigned int)saveToArchive:(struct Drawing *)arg1 withPathData:(_Bool)arg2;
- (id)initWithArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;

@end
