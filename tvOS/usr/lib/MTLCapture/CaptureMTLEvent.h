//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLEvent-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLEvent, MTLSharedEvent;

@interface CaptureMTLEvent : NSObject <MTLEvent, CaptureMTLObject>
{
    CaptureMTLDevice *_captureDevice;
    id <MTLEvent> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    // Error parsing type: AQ, name: _downloadSignal
    id <MTLSharedEvent> _downloadEvent;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)newDownloadPoint:(id)arg1;
@property(readonly) id <MTLEvent> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

