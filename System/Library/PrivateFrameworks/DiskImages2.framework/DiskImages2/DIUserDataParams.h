@class NSDictionary;

@interface DIUserDataParams : DIBaseParams

@property (retain, nonatomic) NSDictionary *userDict;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)embedWithError:(id *)a0;
- (BOOL)retrieveWithError:(id *)a0;

@end
