/**
 * Copyright 2011 - 2020 José Expósito <jose.exposito89@gmail.com>
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 2 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef ACTIONS_ACTION_TYPE_H_
#define ACTIONS_ACTION_TYPE_H_

enum class ActionType {
  NO_ACTION,
  MAXIMIZE_RESTORE_WINDOW,
  MINIMIZE_WINDOW,
  TILE_WINDOW,
  CHANGE_DESKTOP,
  SEND_KEYS,
  RUN_COMMAND,
  // Adding a new action? Don't forget to add it in
  // XmlConfigLoader::getActionType and ActionFactory::buildAction
};

#endif  // ACTIONS_ACTION_TYPE_H_
