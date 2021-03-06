//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode, SCNScene;

@protocol SCNViewJSExport <JSExport>
@property(nonatomic) _Bool showsStatistics;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) id delegate;
@property(nonatomic) double currentTime;
@property(nonatomic) unsigned long long antialiasingMode;
@property(nonatomic) _Bool allowsCameraControl;
@property(copy, nonatomic) id backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)snapshot;
@end

