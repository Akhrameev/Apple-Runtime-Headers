//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsDevice.h>

@class NSMutableArray;

@interface MTLGPUDebugDevice : MTLToolsDevice
{
    struct MetalBufferHeap bufferHeap;
    NSMutableArray *_argumentDescriptors;
    _Bool _enableBoundsChecking;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned int)arg1;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (void)onComputePipelineCreated:(id)arg1;
- (void)onRenderPipelineCreated:(id)arg1;
- (void)_modifyCompileOptions:(unsigned int *)arg1;
- (id)newStageArgumentBuffer;
- (id)newStageBufferArgumentEncoder;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

