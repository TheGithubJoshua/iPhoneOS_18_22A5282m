@class NSString, NSDictionary, NSDate;

@interface CKEvent : NSObject

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSDictionary *metadata;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;

@end
