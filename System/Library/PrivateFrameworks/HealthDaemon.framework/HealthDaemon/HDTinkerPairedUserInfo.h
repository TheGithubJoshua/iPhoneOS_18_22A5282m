@class NSString, NSNumber;

@interface HDTinkerPairedUserInfo : NSObject

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *dsid;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
