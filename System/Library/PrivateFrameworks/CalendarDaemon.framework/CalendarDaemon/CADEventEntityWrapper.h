@interface CADEventEntityWrapper : CADEntityWrapper {
    double _occurrenceDate;
}

@property (nonatomic) BOOL isDropoffEvent;
@property (nonatomic) BOOL isPickupEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)occurrenceDate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCalEntity:(void *)a0 loadedValues:(id)a1 occurrenceDate:(double)a2;

@end
