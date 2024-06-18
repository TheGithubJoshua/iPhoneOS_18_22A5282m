@class NSString, AFClientInfo;

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating> {
    AFClientInfo *_base;
    int _processIdentifier;
    NSString *_processName;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasProcessIdentifier : 1; unsigned char hasProcessName : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProcessName:(id)a0;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setProcessIdentifier:(int)a0;
- (int)getProcessIdentifier;
- (id)getProcessName;

@end
