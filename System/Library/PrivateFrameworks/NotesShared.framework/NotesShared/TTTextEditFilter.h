@class NSSet, NSDate;

@interface TTTextEditFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *allowedUserIDs;
@property (copy, nonatomic) NSSet *allowedAttachmentIDs;
@property (nonatomic) BOOL allowsMissingTimestamps;
@property (nonatomic) BOOL allowsMissingUsers;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
