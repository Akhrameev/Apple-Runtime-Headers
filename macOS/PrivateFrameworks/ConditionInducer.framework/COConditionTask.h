//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface COConditionTask : NSObject
{
    BOOL _running;
    BOOL _slowTimeout;
    int _endStatus;
    int _processIdentifier;
    NSObject<OS_dispatch_semaphore> *_termination_sem;
    NSString *_launchPath;
    NSArray *_arguments;
    NSMutableArray *_taskFileHandleArray;
    NSString *_stdoutFname;
    NSString *_stderrFname;
    NSString *_stdinFname;
    NSFileHandle *_stdinFileHandle;
    NSFileHandle *_stdoutFileHandle;
    NSFileHandle *_stderrFileHandle;
    double _executionTime;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) BOOL slowTimeout; // @synthesize slowTimeout=_slowTimeout;
@property(nonatomic) double executionTime; // @synthesize executionTime=_executionTime;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain, nonatomic) NSFileHandle *stderrFileHandle; // @synthesize stderrFileHandle=_stderrFileHandle;
@property(retain, nonatomic) NSFileHandle *stdoutFileHandle; // @synthesize stdoutFileHandle=_stdoutFileHandle;
@property(retain, nonatomic) NSFileHandle *stdinFileHandle; // @synthesize stdinFileHandle=_stdinFileHandle;
@property(retain, nonatomic) NSString *stdinFname; // @synthesize stdinFname=_stdinFname;
@property(retain, nonatomic) NSString *stderrFname; // @synthesize stderrFname=_stderrFname;
@property(retain, nonatomic) NSString *stdoutFname; // @synthesize stdoutFname=_stdoutFname;
@property(retain, nonatomic) NSMutableArray *taskFileHandleArray; // @synthesize taskFileHandleArray=_taskFileHandleArray;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *termination_sem; // @synthesize termination_sem=_termination_sem;
@property BOOL running; // @synthesize running=_running;
@property(nonatomic) int endStatus; // @synthesize endStatus=_endStatus;
- (id)description;
- (int)signalRunningTask:(int)arg1;
- (BOOL)resume;
- (BOOL)suspend;
- (void)interrupt;
- (void)terminate;
- (void)stop;
- (BOOL)start;
- (id)stderrFromResults;
- (id)stdoutFromResults;
- (void)stopTask;
- (BOOL)launchTask:(id *)arg1;
- (BOOL)waitForTaskWithTimeout:(unsigned int)arg1;
- (void)waitForExitInformation:(int)arg1;
- (id)initWithCommand:(id)arg1 arguments:(id)arg2;

@end

