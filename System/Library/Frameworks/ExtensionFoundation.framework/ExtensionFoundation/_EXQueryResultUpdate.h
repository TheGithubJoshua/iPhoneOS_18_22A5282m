@class NSSet;

@interface _EXQueryResultUpdate : _EXQueryResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs;

- (id)initWithCoder:(id)a0;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;
- (id)initWithIdentities:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)addedExtensions;
- (id)description;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;

@end
