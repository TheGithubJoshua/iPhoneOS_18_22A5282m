@class NSDictionary, NSDate;

@interface _PSClustersArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *archiveDate;
@property (readonly, nonatomic) NSDictionary *clustersDictionary;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClustersDictionary:(id)a0 archiveDate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
