@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) BOOL shouldCopy;
@property (nonatomic) BOOL tryDeltaCopy;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)clientPromiseClass;

@end
