@class PAAccess, NSString;

@interface PAPartialAccessRecord : NSObject <PAAccessRecord>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) PAAccess *access;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccess:(id)a0 endTime:(double)a1;

@end
