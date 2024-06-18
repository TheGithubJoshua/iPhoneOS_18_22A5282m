@class NSArray, NSDictionary;

@interface ENDownloadManagerState : NSObject <NSSecureCoding> {
    NSDictionary *_statesByURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *endpoints;
@property (readonly, copy, nonatomic) NSArray *endpointStates;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setEndpoints:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)stateForServerBaseURL:(id)a0;

@end
