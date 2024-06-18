@class NSString, SADynamiteClientState, NSArray;

@interface SAGetDynamiteClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADynamiteClientState *clientState;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamiteClientState;
+ (id)getDynamiteClientStateWithDictionary:(id)a0 context:(id)a1;

@end