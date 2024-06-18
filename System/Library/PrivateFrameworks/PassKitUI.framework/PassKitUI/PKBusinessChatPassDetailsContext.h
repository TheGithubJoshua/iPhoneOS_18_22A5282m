@class NSString, PKPass;

@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext> {
    PKPass *_pass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)requiresAuthorization;
- (id)initWithPass:(id)a0;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)intentParameters;

@end
