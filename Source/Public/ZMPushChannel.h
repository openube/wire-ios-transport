//
// Wire
// Copyright (C) 2017 Wire Swiss GmbH
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
//

#import <Foundation/Foundation.h>

@protocol ZMPushChannel <NSObject>

/// When set not to nil an attempt open the push channel will be made
@property (nonatomic, nullable) NSString *clientID;

/// If set to YES the push channel can be opened while the app is in the background. Updating will call attemptToOpen.
@property (nonatomic) BOOL allowToBeOpenInBackground;

/// Will open the push channel if all required conditions are met
- (void)attemptToOpen;

/// Will close the push channel until @c attemptToOpen is called
- (void)close;

@end
