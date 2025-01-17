//
//  TYAddDeviceUtils.h
//  TuyaSmartHomeKit_Example
//
//  Created by Kennaki Kai on 2018/12/3.
//  Copyright © 2018 xuchengcheng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYAddDeviceUtils : NSObject

+ (instancetype)sharedInstance;

- (UILabel *)keyLabel;

- (UITextField *)textField;

- (void)alertMessage:(NSString *)message;
@end

TYAddDeviceUtils * sharedAddDeviceUtils();

NS_ASSUME_NONNULL_END
