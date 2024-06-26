@class NSString, AFSiriActivationContext, NSDictionary;

@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating> {
    AFSiriActivationContext *_base;
    unsigned long long _timestamp;
    long long _source;
    long long _event;
    unsigned long long _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasSource : 1; unsigned char hasEvent : 1; unsigned char hasOptions : 1; unsigned char hasDeviceID : 1; unsigned char hasUserInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setSource:(long long)a0;
- (void)setUserInfo:(id)a0;
- (void)setDeviceID:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)setEvent:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)getTimestamp;
- (void)setTimestamp:(unsigned long long)a0;
- (id)getDeviceID;
- (long long)getEvent;
- (unsigned long long)getOptions;
- (long long)getSource;
- (id)getUserInfo;

@end
